# 🔬 Microplastic Detection Device

An IoT-based environmental monitoring project designed to detect and monitor
microplastic contamination in water using embedded sensing, signal processing,
and data visualization.

## Objectives
- Detect the presence of microplastics in water samples
- Develop a portable and low-cost detection system
- Process sensor data using a microcontroller
- Display detection results
- Store and analyze collected data

## System Architecture

Water Sample → Sample Chamber → Detection Sensor → Signal Conditioning
→ Microcontroller → Data Processing → Display / Computer → Detection Result

## Repository Structure
- `hardware/` - Circuit and PCB documentation
- `firmware/` - Microcontroller firmware
- `sensors/` - Sensor interface and calibration notes
- `software/` - Python data analysis and visualization
- `data/` - Sample datasets
- `docs/` - Project documentation
- `images/` - Prototype/circuit images
- `results/` - Detection results

## Working Principle
1. Introduce a water sample into the detection chamber.
2. Acquire the sensor response.
3. Process the sensor signal using the microcontroller.
4. Apply a detection threshold to identify a possible microplastic signal.
5. Display/store the result for further analysis.

## Future Improvements
- Machine-learning based classification
- ESP32 wireless monitoring
- Mobile/cloud dashboard
- Automatic particle counting
- Polymer-type classification
- Improved calibration and enclosure

## Author
Om Umredkar

## License
MIT License
<img width="1220" height="1511" alt="WhatsApp Image 2026-09-12 at 12 28 17 PM" src="https://github.com/user-attachments/assets/329569c6-3d24-46b4-abf0-9915ebd6562c" />
