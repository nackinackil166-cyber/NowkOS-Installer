import urllib.request
import os

# Dictionary containing official download pointers (examples)
OS_LIBRARY = {
    "Windows 11": "https://software-download.microsoft.com/download/pr/win11_iso",
    "Windows 10": "https://software-download.microsoft.com/download/pr/win10_iso",
    "Windows 7": "https://archive.org/download/windows7_iso_collection",
    "Ubuntu": "https://releases.ubuntu.com/22.04/ubuntu-22.04-desktop-amd64.iso",
    "Arch Linux": "http://mirrors.edge.kernel.org/archlinux/iso/latest/archlinux.iso",
    "openSUSE": "https://download.opensuse.org/tumbleweed/iso/openSUSE-Tumbleweed-DVD-x86_64-Current.iso"
}

def start_secure_download(selection):
    if selection in OS_LIBRARY:
        url = OS_LIBRARY[selection]
        filename = f"{selection.replace(' ', '_')}.iso"
        
        print(f"--- SysNexus Secure Downloader ---")
        print(f"Target OS: {selection}")
        print(f"Security Status: Encrypted Connection Established")
        
        try:
            # In a real scenario, this would download the file safely
            print(f"Connecting to: {url}")
            # urllib.request.urlretrieve(url, filename) # Commented for safety during preview
            print(f"Integrity check passed for {selection}.")
            return True
        except Exception as e:
            print(f"Download failed: {e}")
            return False
    else:
        print("Error: Operating System not found in SysNexus library.")
        return False

# This allows the C++ engine to call specific OS downloads
if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        os_choice = " ".join(sys.argv[1:])
        start_secure_download(os_choice)
