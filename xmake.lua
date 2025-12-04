add_rules("mode.debug", "mode.release")
add_rules("plugin.compile_commands.autoupdate", {outputdir = "build"}) 

set_policy("build.sanitizer.address", true) 
set_policy("build.sanitizer.leak", true)

add_requires("raylib")
add_requires("rapidjson")
add_requires("imgui")

set_warnings("all") 
set_languages("c++17")

includes("src")