import customtkinter as ctk
import subprocess

# ---------------------------------------------------------
# PROJECT: NOWK OS INSTALLER GUI
# MODULE: MAIN_INTERFACE
# LANGUAGE: PYTHON (CUSTOMTKINTER)
# ---------------------------------------------------------

class NowkOSApp(ctk.CTk):
    def __init__(self):
        super().__init__()

        # Window Configuration
        self.title("NOWK OS - DEPLOYMENT ENGINE v1.0")
        self.geometry("600x450")
        ctk.set_appearance_mode("dark")  # Vintage Dark Mode
        ctk.set_default_color_theme("blue")

        # UI Layout
        self.label = ctk.CTkLabel(self, text="NOWK OS INSTALLER", font=("Courier", 24, "bold"))
        self.label.pack(pady=20)

        self.info_label = ctk.CTkLabel(self, text="Select the Target Operating System:", font=("Courier", 14))
        self.info_label.pack(pady=10)

        # Buttons Grid
        self.button_frame = ctk.CTkFrame(self)
        self.button_frame.pack(pady=20, padx=20, fill="both", expand=True)

        # OS Options
        systems = [
            ("Windows 11", "win11"), ("Windows 10", "win10"), ("Windows 7", "win7"),
            ("Arch Linux", "arch"), ("Ubuntu", "ubuntu"), ("OpenSUSE", "suse")
        ]

        for text, os_id in systems:
            btn = ctk.CTkButton(self.button_frame, text=text, 
                                command=lambda o=os_id: self.start_install(o),
                                font=("Courier", 12))
            btn.pack(pady=5, padx=10, fill="x")

    def start_install(self, os_id):
        print(f"Executing deployment for: {os_id}")
        # Here we call your C# or C++ Real Installer
        # Example: subprocess.run(["RealInstaller.exe", os_id])
        self.label.configure(text=f"INSTALLING {os_id.upper()}...", text_color="green")

if __name__ == "__main__":
    app = NowkOSApp()
    app.mainloop()
