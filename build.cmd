nuget install Microsoft.Windows.CppWinRT -Version 2.0.230706.1
nuget install Microsoft.WindowsAppSDK -Version 1.4.230822000
nuget install PyWinRT -Version 1.0.0-beta.10
Microsoft.Windows.CppWinRT.2.0.230706.1\bin\cppwinrt.exe -input Microsoft.WindowsAppSDK.1.4.230822000\lib\uap10.0 -input Microsoft.WindowsAppSDK.1.4.230822000\lib\uap10.0.18362 -input sdk -output cppwinrt
PyWinRT.1.0.0-beta.10\bin\pywinrt.exe -input Microsoft.WindowsAppSDK.1.4.230822000\lib\uap10.0 -input Microsoft.WindowsAppSDK.1.4.230822000\lib\uap10.0.18362 -input sdk -output pywinrt -module winsdk
py -m pip install build
py -m build
pip install .\dist\winsdk-1.0.0b10-cp311-cp311-win_amd64.whl --force-reinstall
cl /I "Microsoft.WindowsAppSDK.1.4.230822000\include" /EHsc /std:c++17 /LD MddBootstrap.cpp /link /LIBPATH:"Microsoft.WindowsAppSDK.1.4.230822000\lib\win10-x64" Microsoft.WindowsAppRuntime.Bootstrap.lib Microsoft.WindowsAppRuntime.lib WindowsApp.lib
copy Microsoft.WindowsAppSDK.1.4.230822000\runtimes\win10-x64\native\Microsoft.WindowsAppRuntime.Bootstrap.dll
py winui.py