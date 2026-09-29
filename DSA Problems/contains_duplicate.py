def containsDuplicate(nums: list[int]) -> bool:
    count = {}
    for num in nums:
        if str(num) in count:
            count[str(num)] += 1
            if count[str(num)] >= 2:
                return True
        else:
            count[str(num)] = 1
    return False