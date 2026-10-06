from itertools import zip_longest

#My solution
def transpose_two_strings(arr):
    # getting the max value of iterations based on the largest string
    max_length = len(arr[0]) if len(arr[0]) > len(arr[1]) else len(arr[1])
    new_list = []

    #looping with the value of the largest string
    for i in range(max_length):
        new_list.append(f"{arr[0][i] if i < len(arr[0]) else ' '} {arr[1][i] if i < len(arr[1]) else ' '}")

    return "\n".join(new_list)

#Best practices
def transpose_two_strings(lst):
    """
    zip_longest go with multiple iterables, at the same time, and match end by the position
    """
    return "\n".join("|".join(row) for row in zip_longest(*lst, fillvalue=" "))


if __name__ == "__main__":
    print(transpose_two_strings(["abc","de"]))