:: g++ main.cpp ^
::    -Iinclude ^
::    -I"C:\Program Files\MySQL\MySQL Server 8.0\include" ^
::    -L"C:\Program Files\MySQL\MySQL Server 8.0\lib" ^
::    -lmysql -lws2_32 -ladvapi32 -lcrypt32 -lshlwapi -luser32 -lkernel32 ^
::    -o main.exe
g++ main.cpp -Iinclude -I"C:\Program Files\MySQL\MySQL Server 8.0\include" -L"C:\Program Files\MySQL\MySQL Server 8.0\lib" -lmysql -lws2_32 -ladvapi32 -lcrypt32 -lshlwapi -luser32 -lkernel32 -o main.exe