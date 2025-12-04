target("RICA_App")
    set_kind("binary") 
    
    add_files("main.cpp")

    add_files(
       "../lib/rlImGui/*.c",
       "../lib/rlImGui/*.cpp"
    )

    add_includedirs("../lib/rlImGui")

    add_packages("raylib", "rapidjson", "imgui") 
target_end()