import pytest

from odd_occurrences_in_array import solution


@pytest.mark.parametrize("test_input, expected", [([9], 9), ([9, 3, 9, 3, 9, 7, 9], 7)])
def test_solution(test_input, expected):
    result = solution(test_input)
    assert result == expected
