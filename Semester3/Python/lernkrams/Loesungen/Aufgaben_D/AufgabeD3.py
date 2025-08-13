# Aufgabe D3 – Normierte Tags (trim + lower)
# Input:
#
# [" Cache.Hit ", "cache.hit", "CACHE.MISS ", " cache.Miss"]
# Erwarteter Output:
#
# ["cache.hit", "cache.hit", "cache.miss", "cache.miss"]

tags_input = [" Cache.Hit ", "cache.hit", "CACHE.MISS ", " cache.Miss"]

def trim_and_lower(tags):
    return [item.lower().strip() for item in tags]

if __name__ == '__main__':
    print(f"Fertiger Kram: {trim_and_lower(tags_input)}")
