def insertion_sort(arr):
    n=len(arr)
    for i in range(1,n):
        if arr[i] >= arr[i-1]:
            continue
        key=arr[i]
        j=i-1
        while j>=0 and arr[j]>key:
            arr[j+1]=arr[j]
            j-=1

        arr[j+1]=key

    return arr

data = [12, 11, 13, 5, 6]
print("Academic Insertion Sort:", insertion_sort(data))