{
    files = {
        "src/main.cpp"
    },
    values = {
        "/usr/bin/g++",
        {
            "-m64",
            "-g",
            "-Wall",
            "-O3",
            "-std=c++17",
            "-I/home/grechka/.xmake/packages/r/raylib/5.5/e1630384937f43bbbc8e15918dfecc58/include",
            "-I/home/grechka/.xmake/packages/r/rapidjson/2025.02.05/94dc0246f1a54b63a255bff5f0bd27a8/include",
            "-I/home/grechka/.xmake/packages/i/imgui/v1.92.1/cc90cb2dcdaa4479b7f252708a83fa3d/include",
            "-I/home/grechka/.xmake/packages/i/imgui/v1.92.1/cc90cb2dcdaa4479b7f252708a83fa3d/include/imgui",
            "-I/home/grechka/.xmake/packages/i/imgui/v1.92.1/cc90cb2dcdaa4479b7f252708a83fa3d/include/backends",
            "-I/home/grechka/.xmake/packages/i/imgui/v1.92.1/cc90cb2dcdaa4479b7f252708a83fa3d/include/misc/cpp",
            "-fsanitize=address",
            "-fsanitize=leak",
            "-DNDEBUG"
        }
    },
    depfiles_format = "gcc",
    depfiles = "main.o: src/main.cpp  /home/grechka/.xmake/packages/r/raylib/5.5/e1630384937f43bbbc8e15918dfecc58/include/raylib.h\
"
}