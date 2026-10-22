class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        st = set()
        n = len(nums)
        freq =0
        for i in range(n):
            if nums[i] == target/2:
                freq +=1
            st.add(nums[i])
        arr = []
        num=0
        for i in range(n):
            diff = target - nums[i]
            if diff ==target/2 and freq<2:
                    continue
            if diff in st:
                arr.append(i)
                index =i
                num = diff
                break
        for i in range(n):
            if nums[i] == diff and i != index:
                arr.append(i)
                break
        arr.sort()
        return arr
        