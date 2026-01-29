using System;
using System.Diagnostics;

/**
 * NOWK OS - REAL DEPLOYMENT ENGINE
 * WARNING: THIS MODULE PERFORMS DISK OPERATIONS
 */

namespace NowkOS {
    class Deployment {
        public static void InstallWindows(string partitionLetter, string isoPath) {
            // DISM é a ferramenta oficial da Microsoft para instalar o Windows de verdade
            // Este comando aplica a imagem do sistema no HD escolhido
            string command = $"/Apply-Image /ImageFile:{isoPath} /Index:1 /ApplyDir:{partitionLetter}:\\";
            
            Console.WriteLine($" | [!] DEPLOYING WINDOWS TO {partitionLetter}:... ");
            ExecuteProcess("dism.exe", command);
        }

        public static void InstallLinux(string diskPath, string imagePath) {
            // No Linux, usamos o comando 'dd' para escrever a imagem bit a bit
            string command = $"if={imagePath} of={diskPath} bs=4M status=progress";
            
            Console.WriteLine($" | [!] DEPLOYING LINUX TO {diskPath}... ");
            ExecuteProcess("dd", command);
        }

        private static void ExecuteProcess(string fileName, string args) {
            ProcessStartInfo psi = new ProcessStartInfo(fileName, args);
            psi.UseShellExecute = false;
            psi.CreateNoWindow = false; // Mostra a janela para você ver o progresso real
            Process p = Process.Start(psi);
            p.WaitForExit();
        }
    }
}
