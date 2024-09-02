import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

# Create sample data with missing values
dates = pd.date_range(start='2023-01-01', periods=10)
values = [100, 120, np.nan, 140, 130, np.nan, 160, 150, 180, 170]
df = pd.DataFrame({'Value': values}, index=dates)

# Plot with dropped NaN values - update the code below
plt.figure(figsize=(6, 4))
plt.subplot(2, 1, 1)


plt.gcf().autofmt_xdate()
plt.title('Time Series with Dropped Missing Values')

# Plot with filled NaN values - update the code below
plt.subplot(2, 1, 2)


plt.gcf().autofmt_xdate()
plt.title('Time Series with Filled Missing Values')

plt.tight_layout()
plt.show()