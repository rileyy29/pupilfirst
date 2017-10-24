//= require rails-ujs

//= require jquery3
//= require popper
//= require bootstrap

//= require turbolinks
//= require turbolinks_compatibility
//= require react
//= require react_ujs

// Require PNotify (rails asset), unobtrusive flash (rubygems), and flashes (local code) early so that notifications
// render as quickly as possible.
// TODO: Remove require pnotify/pnotify.js when possible.
// The extra require is needed to avoid issue with incorrect require-order in main file.
//= require pnotify/pnotify.js
//= require pnotify
//= require flashes
//= require unobtrusive_flash

// XDAN's datetimepicker
//= require datetimepicker
//= require xdan_datetimepicker

//= require moment
//= require select2-full
//= require google_tag_manager
//= require youtube
//= require founders
//= require limit_max_int
//= require inspectlet
//= require video
//= require jquery-stickit
//= require jquery.scrollTo
//= require ahoy
//= require jspdf

// Rails assets
//= require intro.js/intro.js
//= require slick-carousel/slick.js
//= require waypoints
//= require typedjs

// Shared
//= require _shared
//= require footer

// Components
//= require components

// Controller-specific
//= require home
//= require startups
//= require team_members
//= require product_metrics
