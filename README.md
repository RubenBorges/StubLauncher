# StubLauncher

I was having trouble opening a particular filetype. Windows continued to fail to recognize the filetype for me to manually associate it with a program. Whenever i tried to "open with," selecting the new program to associate with the filetype would simply cause the prompt window to reopen -- efffectively accomplishing nothing in a continuous loop. I tried creating a symbolic link so that the old .exe filepath would point to the new program but this would launch the new program without required dependencies.  As a consequence of all of this i had to compile this "StubLauncher." 

**NOTE: 

- This source code is currently setup for C++26 Preview and imports the standard library as modules. 
- The source code is **currently setup to target QtCreator.exe.** However, with minimal tweaking to the code you can target the executable you actually need.

### Setting Target Executable 
Change the following strings to reflect the path to your desired target executable:

   > line 22: std::string qtCreatorPath = R"(C:\Qt\Tools\Qt Creator 18.0.0-beta1\bin\qtcreator.exe)";
   >
   > line 23: std::string workingDir = R"(C:\Qt\Tools\Qt Creator 18.0.0-beta1\bin)";

If you decide to change the variable names for aesthetic reasons you will also have to change the following:

   > line 26: std::string command = "\"" + qtCreatorPath + "\" \"" + fileToOpen + "\"";
   >

### Usage
1) Once you've compiled the solution, place the produced executable in the same directory as your target executable. 
2) Find a file of the type you would like to associate with the target executable and use the "open with" prompt to set the association.

**THAT'S IT!**

Final note: I will **not** update this repo. Thanks for checking it out.

**Signed: Ruben Borges**
29 September 2025
