
		int k = 0;
		int sum = 0;
		int min = INT_MAX;

		for (int i = 0; i < n; i++)
		{
			sum = sum + A[i];
		}
		if ((sum & 1) == 0)
		{
			return 0;
		}

		else
		{
			for (int i = 0; i < n; i++)
			{
				if ((n & A[i]) == 0 && (A[i] < min))
				{
					min = A[i];
				}
			}

			if (min == INT_MAX)
			{
				return -1;
			}

			while ((min & 1) != 1)
			{
				min = min / 2;
				k++;
			}

			return k;
		}