class Solution:
    def taskSchedulerII(self, tasks: List[int], space: int) -> int:
        d={}
        curr_t=0
        for task in tasks:
            curr_t += 1
            if task in d :
                past_t = d[task]
                if curr_t - past_t  <=  space :
                    wait = past_t + space + 1
                    d[task] = wait
                    curr_t = wait
            d[task] = curr_t
        return curr_t