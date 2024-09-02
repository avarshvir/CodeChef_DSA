import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

# Generate sample temperature data for a year
dates = pd.date_range(start='2023-01-01', end='2023-12-31', freq='D')
temperatures = np.random.normal(loc=15, scale=10, size=len(dates))  # Mean of 15°C, std dev of 10°C
temperatures = temperatures + 15 * np.sin(np.arange(len(dates)) * 2 * np.pi / 365)  # Add seasonal trend

# Create DataFrame
df = pd.DataFrame({'Date': dates, 'Temperature': temperatures})
df.set_index('Date', inplace=True)

# Calculate moving average
df['Moving_Avg'] = df['Temperature'].rolling(window=30).mean()

# Plotting
plt.figure(figsize=(12, 6))
plt.plot(df.index, df['Temperature'], label='Daily Temperature', alpha=0.5)
plt.plot(df.index, df['Moving_Avg'], label='30-day Moving Average', color='red')
plt.title('Daily Temperatures in City X (2023)')
plt.xlabel('Date')
plt.ylabel('Temperature (°C)')
plt.legend()
plt.grid(True, linestyle='--', alpha=0.7)

plt.tight_layout()
plt.show()