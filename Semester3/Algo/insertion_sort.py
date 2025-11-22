def insertion_sort(arr):
    for i in range(1, len(arr)):
        item = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > item:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = item
    print(arr)

if __name__ == "__main__":
    testdaten = [7, 42456, 6, 3, 78, 4, 67,396, 534,74]
    insertion_sort(testdaten)
