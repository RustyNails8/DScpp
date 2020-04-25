@echo off

if [%1] == [] (
  echo "Please provide a C or cpp filename !"
  ) ELSE (
      echo "Compiling now ..." %1
      echo ""
      cd ../build

      cl -Zi ../src/%1 user32.lib gdi32.lib
      mv *.exe ../bin/.
      cd ../bin
      ls -tr | tail
)



  