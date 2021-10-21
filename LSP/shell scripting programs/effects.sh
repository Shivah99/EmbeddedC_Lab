#How to write script, that will print, Message ""Hello World"", in Bold and Blink effect, and in different Colors like red, brown etc using echo command."
#!/bin/sh

echo -e "\033[1;31;5m Hello World\033[0m"
echo -e "\033[1;33;5m Hello World\033[0m"
echo -e "\033[1;32;5m Hello World\033[0m"

