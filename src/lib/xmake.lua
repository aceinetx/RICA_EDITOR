target("imgui")
    set_kind("static")

    add_files(
        "imgui/*.cpp"
    )

    add_includedirs(
        "imgui",
        {public=true}
    )
target_end()

target("rlImGui")
    set_kind("static")

    add_files(
        "rlImGui/*.cpp"
    )

    add_includedirs(
        "rlImGui",
        {public=true}
    )

    add_packages("raylib")
    add_deps("imgui")
target_end()