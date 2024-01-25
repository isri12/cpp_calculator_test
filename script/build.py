import os
import sys
import subprocess

# def generate_makefile(target, dependencies, recipe):
#   """Generates a Makefile for the given target and dependencies.

#   Args:
#     target: The target file.
#     dependencies: The list of dependencies for the target file.
#     recipe: The recipe for building the target file.

#   Returns:
#     The generated Makefile.
#   """

#   makefile = ""
#   makefile += f"TARGET := {target}\n\n"
#   makefile += f"DEPS := {','.join(dependencies)}\n\n"
#   makefile += f"RECIPE := {recipe}\n\n"
#   makefile += "all: $(TARGET)\n\n"
#   makefile += f"$(TARGET): $(DEPS)\n"
#   makefile += f"\t$(RECIPE)\n\n"
#   makefile += "clean:\n"
#   makefile += f"\trm -f $(TARGET)\n\n"

#   #return makefile

# def main():
#   """The main function."""

#   if len(sys.argv) != 4:
#     print("Usage: build.py target dependencies recipe")
#     sys.exit(1)

#   target = sys.argv[1]
#   dependencies = sys.argv[2].split(",")
#   recipe = sys.argv[3]

#   makefile = generate_makefile(target, dependencies, recipe)

#   with open("Makefile", "w") as f:
#     f.write(makefile)

# if __name__ == "__main__":
#   main()


# Change to the parent directory
def print_current_directory():
  print("-- parent dir:", os.getcwd())

def change_directory(new_dir):
    os.chdir(new_dir)
    print(f"####cd {new_dir}####")
    print("-- {new_dir} dir:", os.getcwd())

def main():
  """The main function."""
  print_current_directory()

  # Change to the parent directory
  # os.chdir("..")
  change_directory("..")

  # Uncomment the following lines if you want to remove and recreate the 'build' directory
  print("####removing build####")
  subprocess.run(["rm", "-r", "build"])
  print("####Creating  build folder####")
  subprocess.run(["mkdir", "build"])

  print("####cd build####")
  change_directory("build")

  print("####cmake ..####")
  subprocess.run(["cmake", "..", "-DINSTALL_GTEST=OFF"])

  print("####cmake --build .####")
  subprocess.run(["cmake", "--build", "."])

  print("####make####")
  subprocess.run(["make"])

  # Uncomment the following lines if you want to install
  print("####Cmake install####")
  subprocess.run(["cmake", "--install", ".", "--config", "Release"])

  print("-- Build dir:", os.getcwd())
  print("-- Test dir:", os.getcwd() + "/tests")

if __name__ == "__main__":
  main()


# Before running the script, make sure to give execute permissions to the 
# Python script (chmod +x script_name.py) and then execute it (./script_name.py). 