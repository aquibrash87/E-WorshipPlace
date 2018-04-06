-- phpMyAdmin SQL Dump
-- version 4.6.6deb4
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Apr 06, 2018 at 07:27 PM
-- Server version: 10.1.23-MariaDB-9+deb9u1
-- PHP Version: 7.0.27-0+deb9u1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `db_ib`
--

-- --------------------------------------------------------

--
-- Table structure for table `pry_table`
--

CREATE TABLE `pry_table` (
  `date` date NOT NULL,
  `fjr` time NOT NULL,
  `shrq` time NOT NULL,
  `dhr` time NOT NULL,
  `asr` time NOT NULL,
  `mgrb` time NOT NULL,
  `ash` time NOT NULL,
  `midnight` time NOT NULL,
  `hadith_eng` varchar(400) NOT NULL,
  `hadith_de` varchar(400) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `pry_table`
--

INSERT INTO `pry_table` (`date`, `fjr`, `shrq`, `dhr`, `asr`, `mgrb`, `ash`, `midnight`, `hadith_eng`, `hadith_de`) VALUES
('2018-04-01', '05:00:00', '06:42:00', '13:14:00', '16:46:00', '19:42:00', '21:15:00', '00:00:00', '', ''),
('2018-04-01', '05:00:00', '06:42:00', '13:14:00', '16:46:00', '19:42:00', '21:15:00', '00:00:00', '00', '00'),
('2018-04-02', '04:58:00', '06:40:00', '13:13:00', '16:47:00', '19:44:00', '21:17:00', '00:00:00', '00', '00'),
('2018-04-03', '04:55:00', '06:38:00', '13:13:00', '16:48:00', '19:45:00', '21:19:00', '00:00:00', '00', '00'),
('2018-04-04', '05:04:00', '06:25:00', '13:50:00', '14:36:00', '19:52:00', '21:21:00', '22:00:00', '', ''),
('0000-00-00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '', ''),
('2018-04-05', '00:00:05', '00:00:06', '00:00:13', '00:00:14', '00:00:19', '00:00:21', '00:00:00', '', ''),
('0000-00-00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '', ''),
('2018-04-06', '05:12:00', '06:14:00', '13:14:00', '14:14:00', '19:10:00', '21:10:00', '00:00:00', '', ''),
('0000-00-00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '00:00:00', '', ''),
('2018-04-07', '04:12:00', '05:14:00', '13:22:00', '15:54:00', '18:12:00', '21:50:00', '00:00:00', '', '');

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
