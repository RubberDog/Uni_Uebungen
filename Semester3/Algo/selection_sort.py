def selection_sort(arr):
    for i in range(len(arr) - 1):
        min_index = i
        for j in range (i+1, len(arr)):
            if arr[j] < arr[min_index]:
               min_index = j
        # diese zeile ist "overkill" - auch wenn der rest sortiert ist, wird i durch sich selbst ersetzt. laut internet aber ne einfachere implementierung
        # außerdem wäre ein weiterer check (vergleich) teurer als eine simple zuweisung
        arr[i], arr[min_index] = arr[min_index], arr[i]
    print(arr)

if __name__ == "__main__":
    testdaten = [7, 42456, 6, 3, 78, 4, 67,396, 534,74]
    selection_sort(testdaten)
