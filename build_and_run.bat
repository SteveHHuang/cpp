@echo off
setlocal enabledelayedexpansion

:: 初始化 MSVC 环境
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"

:: 获取不带扩展名的文件名（比如 hello.cpp -> hello）
set "filename=%~n1"

:: 创建输出文件夹（如果没有）
if not exist build (
    mkdir build
)
if not exist output (
    mkdir output
)

:: 清理旧的 .obj 文件（仅当前目标）
if exist build\%filename%.obj (
    echo Deleting old object file: build\%filename%.obj
    del /q build\%filename%.obj
)

:: 清理旧的 .exe 文件（仅当前目标）
if exist output\%filename%.exe (
    echo Deleting old exe file: output\%filename%.exe
    del /q output\%filename%.exe
)

:: 编译：源代码 -> build\xxx.obj，再链接 -> output\xxx.exe
cl.exe /EHsc %1 /Fo:build\ /Fe:output\%filename%.exe

:: 判断是否生成成功
if exist output\%filename%.exe (
    echo -------------------------------
    echo Running output\%filename%.exe:
    echo -------------------------------
    output\%filename%.exe
) else (
    echo ❌ Build failed: .exe not created
)

endlocal
