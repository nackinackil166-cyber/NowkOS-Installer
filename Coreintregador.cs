using System;
using System.Diagnostics; // Required to run external scripts

/**
 * PROJECT: NOWK OS INSTALLER
 * MODULE: CORE_INTEGRATOR
 * LANGUAGE: C#
 */

namespace NowkOS
{
    class Integrator
    {
        static void Main(string[] args)
        {
            Console.WriteLine(" +---------------------------------------------------------+ ");
            Console.WriteLine(" | NOWK OS - CENTRAL INTEGRATOR                            | ");
            Console.WriteLine(" +---------------------------------------------------------+ ");

            // 1. CALLING HARDWARE CHECK (C++)
            RunModule("CheckHardware.exe", "Scanning Hardware...");

            // 2. CALLING DATA MIGRATION (PYTHON)
            RunModule("python DataMigration.py", "Migrating User Data...");

            // 3. DETECTING OS AND RUNNING POST-INSTALL
            // This is where the BASH logic enters
            if (IsLinux()) {
                RunModule("bash linux_setup.sh", "Executing Linux Setup...");
            } else {
                RunModule("powershell.exe -File win_setup.ps1", "Executing Windows Setup...");
            }

            Console.WriteLine(" |                                                         | ");
            Console.WriteLine(" |  ALL MODULES EXECUTED SUCCESSFULLY                      | ");
            Console.WriteLine(" +---------------------------------------------------------+ ");
        }

        static void RunModule(string command, string description)
        {
            Console.WriteLine(" | > " + description);
            try {
                ProcessStartInfo psi = new ProcessStartInfo("cmd.exe", "/c " + command);
                psi.WindowStyle = ProcessWindowStyle.Hidden;
                Process p = Process.Start(psi);
                p.WaitForExit();
                Console.WriteLine(" |   STATUS: [ DONE ]                                      | ");
            } catch {
                Console.WriteLine(" |   STATUS: [ ERROR ]                                     | ");
            }
        }

        static bool IsLinux() {
            // Logic to detect if the installer is running on Linux environment
            return Environment.OSVersion.Platform == PlatformID.Unix;
        }
    }
}
