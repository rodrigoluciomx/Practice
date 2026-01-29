def solution(s):
    new_string = []
    for char in s:
        if not char.isupper():
            new_string.append(char)
        else:
            new_string.append(' ')
            new_string.append(char)
    return ''.join(new_string)

if __name__ == "__main__":
    print(solution("helloWorld"))



