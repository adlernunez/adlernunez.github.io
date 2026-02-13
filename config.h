/**
 * ============================================================================
 * TERMINAL PORTFOLIO - CONFIGURATION FILE
 * ============================================================================
 * Edit this file to customize your portfolio details.
 * All settings in one place for easy maintenance.
 * ============================================================================
 */

#ifndef PORTFOLIO_CONFIG_H
#define PORTFOLIO_CONFIG_H

/* ============================================================================
 * PERSONAL INFORMATION
 * ============================================================================ */

#define NAME                "Your Name"
#define DESIGNATION         "Embedded Systems Engineer"
#define LOCATION           "Bengaluru, IN"
#define STATUS             "ONLINE"              // ONLINE, BUSY, AVAILABLE, etc.

/* ============================================================================
 * CONTACT DETAILS
 * ============================================================================ */

#define EMAIL              "your.email@example.com"
#define GITHUB_USERNAME    "yourusername"
#define LINKEDIN_PROFILE   "yourprofile"
#define BLOG_URL           "#"                   // Your blog URL or "#" if none
#define PHONE              "+91 98765 43210"     // Optional

/* ============================================================================
 * SOCIAL MEDIA (Optional)
 * ============================================================================ */

#define TWITTER_HANDLE     "@yourhandle"         // or "" if not applicable
#define STACKOVERFLOW_ID   "12345678"            // or "" if not applicable
#define PORTFOLIO_URL      "https://yoursite.com" // or "" if not applicable

/* ============================================================================
 * ABOUT SECTION
 * ============================================================================ */

#define BIO_PARAGRAPH_1 \
    "Embedded systems engineer specializing in IoT solutions, real-time firmware development, " \
    "and hardware-software integration. Passionate about creating efficient, scalable systems " \
    "that bridge the physical and digital worlds."

#define BIO_PARAGRAPH_2 \
    "With expertise in STM32 and ESP32 microcontrollers, I design and develop solutions ranging " \
    "from sensor networks to complex automation systems. My approach combines low-level programming " \
    "skills with modern development practices to deliver robust, production-ready embedded applications."

/* Specializations - Add or remove as needed */
#define SPECIALIZATION_1   "STM32 Firmware Development"
#define SPECIALIZATION_2   "ESP32 IoT Systems"
#define SPECIALIZATION_3   "PCB Design & Prototyping"
#define SPECIALIZATION_4   "Sensor Integration & Data Acquisition"
#define SPECIALIZATION_5   "Wireless Communication (BLE, WiFi, LoRa)"
#define SPECIALIZATION_6   "Real-Time Operating Systems (FreeRTOS)"

/* ============================================================================
 * PROJECTS
 * ============================================================================ */

/* PROJECT 1 */
#define PROJECT_1_TITLE    "IoT Smart Parking System"
#define PROJECT_1_DESC \
    "Real-time parking availability monitoring system using ESP32 and ultrasonic sensors. " \
    "Features cloud connectivity, mobile app integration, and predictive analytics."
#define PROJECT_1_TAG_1    "ESP32"
#define PROJECT_1_TAG_2    "MQTT"
#define PROJECT_1_TAG_3    "Cloud-IoT"
#define PROJECT_1_TAG_4    "Mobile-App"

/* PROJECT 2 */
#define PROJECT_2_TITLE    "Audio Processing Unit"
#define PROJECT_2_DESC \
    "Custom DSP implementation on STM32H7 for real-time audio filtering and effects. " \
    "Includes FFT analysis, parametric EQ, and dynamic range compression."
#define PROJECT_2_TAG_1    "STM32H7"
#define PROJECT_2_TAG_2    "DSP"
#define PROJECT_2_TAG_3    "I2S"
#define PROJECT_2_TAG_4    "CMSIS-DSP"

/* PROJECT 3 */
#define PROJECT_3_TITLE    "Mesh Network Implementation"
#define PROJECT_3_DESC \
    "Self-healing wireless sensor network using ESP32 nodes. Implements custom routing " \
    "protocol optimized for low-power operation and extended range."
#define PROJECT_3_TAG_1    "ESP-MESH"
#define PROJECT_3_TAG_2    "WiFi"
#define PROJECT_3_TAG_3    "Low-Power"
#define PROJECT_3_TAG_4    "Networking"

/* PROJECT 4 */
#define PROJECT_4_TITLE    "Environmental Monitoring Station"
#define PROJECT_4_DESC \
    "Multi-sensor data logger with STM32L4 for temperature, humidity, air quality, and " \
    "atmospheric pressure monitoring. Features SD card storage and LoRaWAN connectivity."
#define PROJECT_4_TAG_1    "STM32L4"
#define PROJECT_4_TAG_2    "LoRaWAN"
#define PROJECT_4_TAG_3    "Sensors"
#define PROJECT_4_TAG_4    "Data-Logging"

/* ============================================================================
 * SKILLS - Hardware
 * Format: Name, Percentage (0-100)
 * ============================================================================ */

#define SKILL_HW_1_NAME    "STM32/ESP32"
#define SKILL_HW_1_LEVEL   90

#define SKILL_HW_2_NAME    "Circuit Design"
#define SKILL_HW_2_LEVEL   75

#define SKILL_HW_3_NAME    "PCB Layout"
#define SKILL_HW_3_LEVEL   70

#define SKILL_HW_4_NAME    "Sensor Integration"
#define SKILL_HW_4_LEVEL   85

/* ============================================================================
 * SKILLS - Software
 * ============================================================================ */

#define SKILL_SW_1_NAME    "C/C++"
#define SKILL_SW_1_LEVEL   90

#define SKILL_SW_2_NAME    "Python"
#define SKILL_SW_2_LEVEL   80

#define SKILL_SW_3_NAME    "FreeRTOS"
#define SKILL_SW_3_LEVEL   75

#define SKILL_SW_4_NAME    "Git/Version Control"
#define SKILL_SW_4_LEVEL   85

/* ============================================================================
 * SKILLS - Protocols
 * ============================================================================ */

#define SKILL_PROTO_1_NAME    "I2C/SPI/UART"
#define SKILL_PROTO_1_LEVEL   90

#define SKILL_PROTO_2_NAME    "MQTT/HTTP"
#define SKILL_PROTO_2_LEVEL   80

#define SKILL_PROTO_3_NAME    "BLE/WiFi"
#define SKILL_PROTO_3_LEVEL   75

#define SKILL_PROTO_4_NAME    "LoRa/LoRaWAN"
#define SKILL_PROTO_4_LEVEL   70

/* ============================================================================
 * SKILLS - Tools
 * ============================================================================ */

#define SKILL_TOOL_1_NAME    "EAGLE/KiCAD"
#define SKILL_TOOL_1_LEVEL   70

#define SKILL_TOOL_2_NAME    "STM32CubeIDE"
#define SKILL_TOOL_2_LEVEL   85

#define SKILL_TOOL_3_NAME    "VS Code"
#define SKILL_TOOL_3_LEVEL   90

#define SKILL_TOOL_4_NAME    "Oscilloscope/Logic Analyzer"
#define SKILL_TOOL_4_LEVEL   80

/* ============================================================================
 * BLOG POSTS
 * ============================================================================ */

/* BLOG POST 1 */
#define BLOG_1_DATE        "2024-12-15"
#define BLOG_1_TITLE       "Optimizing Power Consumption in ESP32 Applications"
#define BLOG_1_DESC \
    "Deep dive into ESP32 power modes and practical strategies for achieving months of " \
    "battery life in IoT devices. Includes code examples and measurement data."

/* BLOG POST 2 */
#define BLOG_2_DATE        "2024-11-28"
#define BLOG_2_TITLE       "Building a Custom RTOS Task Scheduler"
#define BLOG_2_DESC \
    "Exploring the internals of FreeRTOS and implementing a minimal cooperative task " \
    "scheduler from scratch for educational purposes."

/* BLOG POST 3 */
#define BLOG_3_DATE        "2024-10-10"
#define BLOG_3_TITLE       "PCB Design Best Practices for STM32"
#define BLOG_3_DESC \
    "Guidelines for power supply design, decoupling, signal integrity, and EMI considerations " \
    "when designing boards with high-speed microcontrollers."

/* ============================================================================
 * WORK AVAILABILITY
 * ============================================================================ */

#define OPEN_TO_WORK       1    // 1 = Yes, 0 = No

#define OPPORTUNITY_1      "Embedded Systems Development"
#define OPPORTUNITY_2      "IoT Solution Architecture"
#define OPPORTUNITY_3      "Firmware Consulting"
#define OPPORTUNITY_4      "Technical Collaboration"

/* ============================================================================
 * FOOTER SETTINGS
 * ============================================================================ */

#define LAST_COMMIT        "2 days ago"          // Update manually or auto-generate
#define SYSTEM_VERSION     "v2.4.1"
#define COPYRIGHT_YEAR     "2024"

/* ============================================================================
 * THEME CUSTOMIZATION (Optional - Advanced)
 * ============================================================================ */

#define THEME_PRIMARY      "#00ff9f"    // Cyan
#define THEME_SECONDARY    "#39ff14"    // Green
#define THEME_ACCENT       "#ffb000"    // Amber
#define THEME_BG_DARK      "#0a0e27"    // Dark Navy
#define THEME_BG_DARKER    "#050812"    // Darker Navy

/* ============================================================================
 * FEATURE FLAGS
 * ============================================================================ */

#define ENABLE_BOOT_SEQUENCE    1    // Show boot animation on load
#define ENABLE_SCANLINES        1    // CRT scanline effect
#define ENABLE_GLITCH_EFFECT    1    // Glitch effect on hover
#define ENABLE_CONSOLE_EASTER   1    // Console easter eggs
#define SHOW_UPTIME_COUNTER     1    // Show uptime in footer

#endif /* PORTFOLIO_CONFIG_H */

/* ============================================================================
 * USAGE INSTRUCTIONS
 * ============================================================================
 * 
 * 1. Edit the values above with your personal information
 * 2. Save this file as 'config.h'
 * 3. Use the Python script (generate_portfolio.py) to generate your HTML
 * 4. Or manually copy-paste values into the HTML template
 * 
 * NOTES:
 * - Keep strings within quotes
 * - For multi-line text, use backslash (\) at end of each line
 * - Skill levels are 0-100 (percentage)
 * - Feature flags: 1 = enabled, 0 = disabled
 * 
 * ============================================================================ */
