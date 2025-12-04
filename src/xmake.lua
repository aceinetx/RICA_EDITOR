includes("lib")

target("RICA_App")
    set_kind("binary") 
    
    add_files("main.cpp")

    add_deps("imgui", "rlImGui")
    add_packages("raylib", "rapidjson") 
target_end()