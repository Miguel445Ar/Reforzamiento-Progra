def removeDuplicates(nums: list[int]) -> int:
        n = len(nums)
        r = 0
        m = 0
        for i in range(n):
            if i + 1 < n and nums[m] == nums[i+1]:
                r += 1
            elif r > 0:
                for j in range(m+1,i+1):
                    nums[j] = None
                m = i + 1
                r = 0
            else:
                m += 1
        k = 0
        for i in range(n):
            if nums[i] != None:
                nums[k] = nums[i]
                k += 1
        return k
def removeDuplicates2(nums: list[int]) -> int:
        i = 0
        
        for j in range(i + 1, len(nums)):
            if nums[j] != nums[i]:
                i += 1
                nums[i] = nums[j]
        return i + 1
l = [1,2,2,3,3,4]
print(removeDuplicates2(l))
print(l)
            