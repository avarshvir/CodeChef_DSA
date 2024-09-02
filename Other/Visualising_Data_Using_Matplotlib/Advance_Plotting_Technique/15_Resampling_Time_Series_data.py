import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

# Create sample hourly data for a month
date_rng = pd.date_range(start='2023-01-01', end='2023-01-31', freq='H')
df = pd.DataFrame(date_rng, columns=['date'])
df['sales'] = np.random.randint(0, 100, size=(len(date_rng)))
df.set_index('date', inplace=True)

# Function to plot time series
def plot_time_series(df, title):
    plt.figure(figsize=(6, 4))
    plt.plot(df.index, df['sales'])
    plt.title(title)
    plt.xlabel('Date')
    plt.ylabel('Sales')
    plt.grid(True)
    plt.gcf().autofmt_xdate()  # Rotate and align the tick labels
    plt.tight_layout()
    plt.show()

# Original hourly data
plot_time_series(df, 'Original Hourly Sales Data')

# Resample to daily data
daily_df = df.resample('D').mean()
plot_time_series(daily_df, 'Daily Resampled Sales Data')

# Resample to weekly data
weekly_df = df.resample('W').sum()
plot_time_series(weekly_df, 'Weekly Resampled Sales Data')
