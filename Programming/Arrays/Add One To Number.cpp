vector<int> Solution::plusOne(vector<int> &A) {
	int n = A.size();
	int carry = n - 1;
	while (A[carry] == 9) carry--;

	vector<int> result;
	bool hasLeadingZeros = true;
	for (int i = 0; i < carry; i++) {
		if (hasLeadingZeros) {
			if (A[i] == 0) continue;
			else hasLeadingZeros = false;
		}

		result.push_back(A[i]);
	}

	result.push_back(A[carry] + 1);

	for (int i = carry + 1; i < n; i++) {
		result.push_back(0);
	}

	return result;
}

