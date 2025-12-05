includes("lib")

target("RICA_App")
    set_kind("binary") 
    
    add_files("Editor/**/*.cpp")
    
    add_deps("imgui", "rlImGui")
    add_packages("raylib", "rapidjson", "RICA") 
target_end()
