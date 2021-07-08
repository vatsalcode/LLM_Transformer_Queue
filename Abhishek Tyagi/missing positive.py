def firstMissingPositive(self, nums: List[int]) -> int:
    i, j = 0, len(nums)

    while i < j:
        if nums[i] == i + 1:
            i += 1

        elif nums[i] > 0 and nums[i] <= j and nums[nums[i] - 1] != nums[i]:
            nums[nums[i] - 1], nums[i] = nums[i], nums[nums[i] - 1]

        else:
            j -= 1
            nums[j], nums[i] = nums[i], nums[j]

    return j + 1
