import os
import sys

def generate_makefile(target, dependencies, recipe):
  """Generates a Makefile for the given target and dependencies.

  Args:
    target: The target file.
    dependencies: The list of dependencies for the target file.
    recipe: The recipe for building the target file.

  Returns:
    The generated Makefile.
  """

  makefile = ""
  makefile += f"TARGET := {target}\n\n"
  makefile += f"DEPS := {','.join(dependencies)}\n\n"
  makefile += f"RECIPE := {recipe}\n\n"
  makefile += "all: $(TARGET)\n\n"
  makefile += f"$(TARGET): $(DEPS)\n"
  makefile += f"\t$(RECIPE)\n\n"
  makefile += "clean:\n"
  makefile += f"\trm -f $(TARGET)\n\n"

  #return makefile

def main():
  """The main function."""

  if len(sys.argv) != 4:
    print("Usage: build.py target dependencies recipe")
    sys.exit(1)

  target = sys.argv[1]
  dependencies = sys.argv[2].split(",")
  recipe = sys.argv[3]

  makefile = generate_makefile(target, dependencies, recipe)

  with open("Makefile", "w") as f:
    f.write(makefile)

if __name__ == "__main__":
  main()