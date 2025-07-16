
import os
print("\033c\033[43;30m\nthe name of the news folders separete by space?")
a=input()
b=a.split(" ")
for c in b:
    os.mkdir(c,755)