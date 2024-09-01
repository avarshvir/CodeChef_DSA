import matplotlib.pyplot as plt
import numpy as np

fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(6, 4), sharex=True)

x = np.linspace(0, 10, 100)

ax1.plot(x, np.sin(x))
ax1.set_title('Sine Wave')

ax2.plot(x, np.cos(x))
ax2.set_title('Cosine Wave')

plt.xlabel('x')
plt.tight_layout()
plt.show()