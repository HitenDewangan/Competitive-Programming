str1 = input().lower()  # Convert both strings to lowercase
str2 = input().lower()

if str1 == str2:
    print("0")
elif str1 < str2:
    print("-1")
else:
    print("1")
