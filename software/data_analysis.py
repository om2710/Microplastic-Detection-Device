import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("../data/sample_data.csv")

print(df)
print("\nSummary:")
print(df.describe(numeric_only=True))

plt.figure(figsize=(8, 4))
plt.plot(df["Sample ID"], df["Sensor Value"], marker="o")
plt.xlabel("Sample ID")
plt.ylabel("Sensor Value")
plt.title("Microplastic Detection Sensor Readings")
plt.grid(True)
plt.tight_layout()
plt.show()
