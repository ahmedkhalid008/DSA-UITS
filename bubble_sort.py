def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):  # Outer loop -> passes
        for j in range(n - i - 1):  # Inner loop -> comparisons
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]  # Swap
        

# --- main part ---
n = int(input("Enter number of elements: ")) # n = size of array
arr = list(map(int,input("Enter the numbers: ").split())) # list of numbers

bubble_sort(arr) # Call the bubble_sort function

print("Final Sorted array:", arr) # Print the sorted array
