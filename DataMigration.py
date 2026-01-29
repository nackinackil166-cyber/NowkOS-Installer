import os, platform, socket, getpass

def migrate():
    print(" +---------------------------------------------------------+ ")
    print(" | NOWK OS - DATA MIGRATION MODULE                         | ")
    print(" +---------------------------------------------------------+ ")
    print(f" | > USER: {getpass.getuser()}")
    print(f" | > SYSTEM: {platform.system()} {platform.release()}")
    print(" | [!] PREPARING CONFIGURATION PACKAGE...                  | ")
    print(" | STATUS: [ READY FOR TRANSFER ]                         | ")
    print(" +---------------------------------------------------------+ ")

if __name__ == "__main__":
    migrate()
