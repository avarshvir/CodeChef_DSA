import pandas as pd
import matplotlib.pyplot as plt

# Create sample data
data = {
    'Date': pd.date_range(start='2023-01-01', end='2023-01-10'),
    'Electronics': [100, 120, 110, 140, 130, 160, 150, 180, 190, 210],
    'Clothing': [80, 90, 85, 100, 95, 110, 105, 120, 125, 130],
    'Books': [50, 60, 55, 65, 70, 75, 80, 85, 90, 95]
}

# Create the DataFrame
df = pd.DataFrame(data)
df.set_index('Date', inplace=True)

# Create the plot
plt.figure(figsize=(6, 4))

# Plot each time series
plt.plot(df.index, df['Electronics'], marker='o')
plt.plot(df.index, df['Clothing'], marker='s')
plt.plot(df.index, df['Books'], marker='^')

# Rotate and align the tick labels so they look better
plt.gcf().autofmt_xdate()

# Use tight layout to prevent clipping of labels
plt.tight_layout()

# Display the plot
plt.show()