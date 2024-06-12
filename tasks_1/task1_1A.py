
def countfoursinlist(list):
    count =0 
    for number in list:
     if (number ==4):
      count+=1

    return count


numlist=[3,4,5,9,4,6,4]
print(f"numberoffours :{countfoursinlist(numlist)}")