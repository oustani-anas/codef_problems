
def spiralOrder(self, matrix: list[list[int]]) -> list[int]:
        left = 0
        top = 0
        right = len(matrix[0]) - 1
        bottom = len(matrix) - 1

        result = []

        while left <= right and top <= bottom:

            # go right
            for col in range(left, right + 1):
                result.append(matrix[top][col])
            top += 1

            # go down
            for row in range(top, bottom + 1):
                result.append(matrix[row][right])
            right -= 1

            # go left
            if top <= bottom:
                for col in range(right, left - 1, -1):
                    result.append(matrix[bottom][col])
                bottom -= 1

            # go up
            if left <= right:
                for row in range(bottom, top - 1, -1):
                    result.append(matrix[row][left])
                left += 1

        return result