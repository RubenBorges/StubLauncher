# StubLauncher

I was having trouble opening a particular filetype. Windows continued to fail to recognize the filetype for me to manually associate it with a program. Whenever i tried to "open with," selecting the new program to associate with the filetype would simply cause the prompt window to reopen -- efffectively accomplishing nothing in a continuous loop. I tried creating a symbolic link so that the old .exe filepath would point to the new program but this would launch the new program without required dependencies.  As a consequence of all of this i had to compile this "StubLauncher." The project is setup using the  C++26 Preview and imports the standard library as modules. This source code is currently setup to launch QtCreator.exe; with some tweaking you can surely adjust the program to satisfy your unique needs. I will not update this repo. Thanks for checking it out.

#Signed: Ruben Borges
29 September 2025****
