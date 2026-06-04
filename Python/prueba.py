def solution(num):
    num_str = str(num)
    new_str = [str(int(c) ** 2) for c in num_str]
    return "".join(new_str)


if __name__ == "__main__":
    print(solution(9119))
