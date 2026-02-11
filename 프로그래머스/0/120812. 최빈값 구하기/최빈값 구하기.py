from collections import Counter

def solution(array):
    count=Counter(array)

    items= count.most_common()


    if len(items)>1 and items[0][1]== items[1][1]:
        return -1
    

    return items[0][0]