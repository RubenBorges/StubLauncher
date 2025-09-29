#include <Windows.h>

import std;

int main(int argc, char* argv[]) {
      
    std::string fileToOpen;

    switch (argc) {
    case 1:
        std::println("A filename is required!\nProper Usage : LauncherStub.exe <file-to-open>\n");
        return 1;
	case 2:
        fileToOpen = argv[1];
        break;
	default:
        std::println("Failure. Proper Usage: LauncherStub.exe <file-to-open>\n");
        return 1;
    }

    // Path to Qt Creator executable
    std::string qtCreatorPath = R"(C:\Qt\Tools\Qt Creator 18.0.0-beta1\bin\qtcreator.exe)";
    std::string workingDir = R"(C:\Qt\Tools\Qt Creator 18.0.0-beta1\bin)";
  
    // Build command line
    std::string command = "\"" + qtCreatorPath + "\" \"" + fileToOpen + "\"";


    STARTUPINFOA si = { sizeof(si) };
    PROCESS_INFORMATION pi;

    BOOL success = CreateProcessA(
        nullptr,                  // Application name
        command.data(),           // Command line
        nullptr, nullptr,         // Process and thread security
        FALSE,                    // Inherit handles
        0,                        // Creation flags
        nullptr,                  // Environment
        workingDir.c_str(),       // Working directory
        &si, &pi                  // Startup and process info
    );


    if (!success) {
        std::cerr << "Failed to launch Targeted Executable: " << GetLastError() << "\n";
        return 1;
    }


    // Optionally wait for the process to finish
    // WaitForSingleObject(pi.hProcess, INFINITE);

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return 0;
}
