def all_marks_possibilities(marks,dic):
    if marks in dic:
        return dic[marks]
    else:
        ans = all_marks_possibilities(marks-1,dic)+all_marks_possibilities(marks-2,dic)+all_marks_possibilities(marks-3,dic)
        dic[marks]=ans
        return ans
    
dic={1:1,2:2,3:3}
print(all_marks_possibilities(87,dic))