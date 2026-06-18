class Solution:
    def mergeSimilarItems(self, items1, items2):
        d = {}

        for value, weight in items1:
            d[value] = weight

        for value, weight in items2:
            if value in d:
                d[value] += weight
            else:
                d[value] = weight

        result = []

        for value in sorted(d):
            result.append([value, d[value]])

        return result